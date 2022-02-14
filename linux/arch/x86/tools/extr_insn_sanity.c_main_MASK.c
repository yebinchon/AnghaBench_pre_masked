
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct insn {scalar_t__ next_byte; scalar_t__ kaddr; } ;
typedef int insn_buff ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct insn*) ;
 int FUNC_1 (int ,char*,unsigned long,unsigned char*,struct insn*) ;
 int FUNC_2 (int ,char*,char*,char*,int,char*,int,int) ;
 scalar_t__ FUNC_3 (unsigned char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (struct insn*) ;
 int FUNC_5 (struct insn*) ;
 int FUNC_6 (struct insn*,unsigned char*,int,int ) ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_7 (unsigned char*,int ,int) ;
 int FUNC_8 (int,char**) ;
 char* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

int FUNC_9(int VAR_11, char **VAR_12)
{
 struct insn VAR_13;
 int VAR_14 = 0;
 int VAR_15 = 0;
 unsigned long VAR_16;
 unsigned char VAR_17[VAR_1 * 2];

 FUNC_8(VAR_11, VAR_12);


 FUNC_7(VAR_17 + VAR_1, VAR_0, VAR_1);

 for (VAR_16 = 0; VAR_16 < VAR_3; VAR_16++) {
  if (FUNC_3(VAR_17) <= 0)
   break;

  if (VAR_16 < VAR_4)
   continue;


  FUNC_6(&VAR_13, VAR_17, sizeof(VAR_17), VAR_10);
  FUNC_5(&VAR_13);

  if (VAR_13.next_byte <= VAR_13.kaddr ||
      VAR_13.kaddr + VAR_1 < VAR_13.next_byte) {

   FUNC_1(VAR_7, "Error: Found an access violation", VAR_16, VAR_17, &VAR_13);
   VAR_15++;
  } else if (VAR_9 && !FUNC_4(&VAR_13))
   FUNC_1(VAR_8, "Info: Found an undecodable input", VAR_16, VAR_17, &VAR_13);
  else if (VAR_9 >= 2)
   FUNC_0(VAR_8, &VAR_13);
  VAR_14++;
 }

 FUNC_2((VAR_15) ? VAR_7 : VAR_8,
  "%s: %s: decoded and checked %d %s instructions with %d errors (seed:0x%x)\n",
  VAR_5,
  (VAR_15) ? "Failure" : "Success",
  VAR_14,
  (VAR_2) ? "given" : "random",
  VAR_15,
  VAR_6);

 return VAR_15 ? 1 : 0;
}
