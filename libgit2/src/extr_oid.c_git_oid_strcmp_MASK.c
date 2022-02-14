
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* id; } ;
typedef TYPE_1__ git_oid ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

int FUNC_1(const git_oid *VAR_1, const char *VAR_2)
{
 const unsigned char *VAR_3;
 unsigned char VAR_4;
 int VAR_5;

 for (VAR_3 = VAR_1->id; *VAR_2 && (VAR_3 - VAR_1->id) < VAR_0; ++VAR_3) {
  if ((VAR_5 = FUNC_0(*VAR_2++)) < 0)
   return -1;
  VAR_4 = (unsigned char)(VAR_5 << 4);
  if (*VAR_2) {
   if ((VAR_5 = FUNC_0(*VAR_2++)) < 0)
    return -1;
   VAR_4 |= VAR_5;
  }
  if (*VAR_3 != VAR_4)
   return (*VAR_3 - VAR_4);
 }

 return 0;
}
