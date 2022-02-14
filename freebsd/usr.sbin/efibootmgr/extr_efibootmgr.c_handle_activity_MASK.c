
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,char*,char*,int) ;
 scalar_t__ FUNC_1 (int ,char*,int **,size_t*,int *) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (char*,int *,size_t) ;

__attribute__((used)) static void
FUNC_6(int VAR_2, bool VAR_3)
{
 uint32_t VAR_4, VAR_5;
 uint8_t *VAR_6;
 size_t VAR_7;
 char *VAR_8;

 FUNC_0(&VAR_8, "%s%04X", "Boot", VAR_2);
 if (VAR_8 == ((void*)0))
  FUNC_2(1, "asprintf");
 if (FUNC_1(VAR_0, VAR_8, &VAR_6, &VAR_7, &VAR_4) < 0)
  FUNC_2(1, "No such bootvar %s\n", VAR_8);

 VAR_5 = FUNC_3(VAR_6);

 if (VAR_3)
  VAR_5 |= VAR_1;
 else
  VAR_5 &= ~VAR_1;

 FUNC_4(VAR_6, VAR_5);

 if (FUNC_5(VAR_8, VAR_6, VAR_7) < 0)
  FUNC_2(1, "handle activity efi_set_variable");
}
