
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_6__ {scalar_t__ PageType; } ;
struct TYPE_7__ {char* Name; TYPE_1__ Header; } ;
typedef TYPE_2__ CONFIG_PAGE_RAID_VOL_1 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int,char*,int *,int *) ;
 int FUNC_4 (int) ;
 int VAR_5 ;
 TYPE_2__* FUNC_5 (int,int ,int ,int *) ;
 char* FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int,TYPE_2__*,int *) ;
 int FUNC_8 (char*,int,char*,char*,char*) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int,char*,char*) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static int
FUNC_14(int VAR_6, char **VAR_7)
{
 CONFIG_PAGE_RAID_VOL_1 *VAR_8;
 U8 VAR_9, VAR_10;
 int VAR_11, VAR_12;

 if (VAR_6 != 3) {
  FUNC_13("name: volume and name required");
  return (VAR_0);
 }

 if (FUNC_10(VAR_7[2]) >= sizeof(VAR_8->Name)) {
  FUNC_13("name: new name is too long");
  return (VAR_1);
 }

 VAR_12 = FUNC_4(VAR_5);
 if (VAR_12 < 0) {
  VAR_11 = VAR_4;
  FUNC_11("mpt_open");
  return (VAR_11);
 }

 VAR_11 = FUNC_3(VAR_12, VAR_7[1], &VAR_9, &VAR_10);
 if (VAR_11) {
  FUNC_12(VAR_11, "Invalid volume: %s", VAR_7[1]);
  return (VAR_11);
 }

 VAR_8 = FUNC_5(VAR_12, VAR_9, VAR_10, ((void*)0));
 if (VAR_8 == ((void*)0)) {
  VAR_11 = VAR_4;
  FUNC_11("Failed to fetch volume names");
  FUNC_1(VAR_12);
  return (VAR_11);
 }

 if (VAR_8->Header.PageType != VAR_3) {
  FUNC_13("Volume name is read only");
  FUNC_2(VAR_8);
  FUNC_1(VAR_12);
  return (VAR_2);
 }
 FUNC_8("mpt%u changing volume %s name from \"%s\" to \"%s\"\n",
     VAR_5, FUNC_6(VAR_9, VAR_10), VAR_8->Name,
     VAR_7[2]);
 FUNC_0(VAR_8->Name, sizeof(VAR_8->Name));
 FUNC_9(VAR_8->Name, VAR_7[2]);

 if (FUNC_7(VAR_12, VAR_8, ((void*)0)) < 0) {
  VAR_11 = VAR_4;
  FUNC_11("Failed to set volume name");
  FUNC_2(VAR_8);
  FUNC_1(VAR_12);
  return (VAR_11);
 }

 FUNC_2(VAR_8);
 FUNC_1(VAR_12);

 return (0);
}
