
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
struct dm_ioctl {char* name; char* uuid; int flags; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_1(uint VAR_11, struct dm_ioctl *VAR_12)
{

 VAR_12->flags &= ~VAR_0;
 VAR_12->flags &= ~VAR_8;
 VAR_12->flags &= ~VAR_7;
 VAR_12->flags &= ~VAR_1;


 if (VAR_11 == VAR_6 ||
     VAR_11 == VAR_3 ||
     VAR_11 == VAR_4)
  return 0;

 if (VAR_11 == VAR_2) {
  if (!*VAR_12->name) {
   FUNC_0("name not supplied when creating device");
   return -VAR_10;
  }
 } else if (*VAR_12->uuid && *VAR_12->name) {
  FUNC_0("only supply one of name or uuid, cmd(%u)", VAR_11);
  return -VAR_10;
 }


 VAR_12->name[VAR_5 - 1] = '\0';
 VAR_12->uuid[VAR_9 - 1] = '\0';

 return 0;
}
