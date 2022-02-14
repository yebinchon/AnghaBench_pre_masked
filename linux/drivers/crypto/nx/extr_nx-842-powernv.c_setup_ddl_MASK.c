
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data_descriptor_entry {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned long,int ) ;
 unsigned int FUNC_1 (unsigned long) ;
 int FUNC_2 (int) ;
 unsigned long FUNC_3 (unsigned char*) ;
 int FUNC_4 (char*,...) ;
 unsigned int FUNC_5 (unsigned int,unsigned int) ;
 int FUNC_6 (struct data_descriptor_entry*,unsigned long,unsigned int) ;
 int FUNC_7 (struct data_descriptor_entry*,struct data_descriptor_entry*,int,int) ;

__attribute__((used)) static int FUNC_8(struct data_descriptor_entry *VAR_5,
       struct data_descriptor_entry *VAR_6,
       unsigned char *VAR_7, unsigned int VAR_8,
       bool VAR_9)
{
 unsigned long VAR_10 = FUNC_3(VAR_7);
 int VAR_11, VAR_12, VAR_13 = VAR_8;

 if (!FUNC_0(VAR_10, VAR_0)) {
  FUNC_4("%s buffer pa 0x%lx not 0x%x-byte aligned\n",
    VAR_9 ? "input" : "output", VAR_10, VAR_0);
  return -VAR_3;
 }






 if (VAR_8 % VAR_1) {
  FUNC_4("%s buffer len 0x%x not a multiple of 0x%x\n",
    VAR_9 ? "input" : "output", VAR_8, VAR_1);
  if (VAR_9)
   return -VAR_3;
  VAR_8 = FUNC_5(VAR_8, VAR_1);
 }


 if (VAR_8 <= FUNC_1(VAR_10)) {
  VAR_12 = FUNC_6(VAR_5, VAR_10, VAR_8);
  FUNC_2(VAR_12 < VAR_8);
  return 0;
 }


 for (VAR_11 = 0; VAR_11 < VAR_2 && VAR_8 > 0; VAR_11++) {
  VAR_12 = FUNC_6(&VAR_6[VAR_11], VAR_10, VAR_8);
  VAR_7 += VAR_12;
  VAR_8 -= VAR_12;
  VAR_10 = FUNC_3(VAR_7);
 }

 if (VAR_8 > 0) {
  FUNC_4("0x%x total %s bytes 0x%x too many for DDL.\n",
    VAR_13, VAR_9 ? "input" : "output", VAR_8);
  if (VAR_9)
   return -VAR_4;
  VAR_13 -= VAR_8;
 }
 FUNC_7(VAR_5, VAR_6, VAR_11, VAR_13);

 return 0;
}
