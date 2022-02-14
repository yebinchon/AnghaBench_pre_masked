
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* id; } ;
typedef TYPE_1__ git_oid ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (unsigned char*,int ,int ) ;
 int FUNC_3 (char*) ;

int FUNC_4(git_oid *VAR_2, const char *VAR_3, size_t VAR_4)
{
 size_t VAR_5;
 int VAR_6;

 FUNC_0(VAR_2 && VAR_3);

 if (!VAR_4)
  return FUNC_3("too short");

 if (VAR_4 > VAR_0)
  return FUNC_3("too long");

 FUNC_2(VAR_2->id, 0, VAR_1);

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_6 = FUNC_1(VAR_3[VAR_5]);
  if (VAR_6 < 0)
   return FUNC_3("contains invalid characters");

  VAR_2->id[VAR_5 / 2] |= (unsigned char)(VAR_6 << (VAR_5 % 2 ? 0 : 4));
 }

 return 0;
}
