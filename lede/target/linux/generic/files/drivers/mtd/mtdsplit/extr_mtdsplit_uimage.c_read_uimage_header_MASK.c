
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct mtd_info {int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtd_info*,size_t,size_t,size_t*,int *) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int
FUNC_2(struct mtd_info *VAR_1, size_t VAR_2, u_char *VAR_3,
     size_t VAR_4)
{
 size_t VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_4, &VAR_5, VAR_3);
 if (VAR_6) {
  FUNC_1("read error in \"%s\"\n", VAR_1->name);
  return VAR_6;
 }

 if (VAR_5 != VAR_4) {
  FUNC_1("short read in \"%s\"\n", VAR_1->name);
  return -VAR_0;
 }

 return 0;
}
