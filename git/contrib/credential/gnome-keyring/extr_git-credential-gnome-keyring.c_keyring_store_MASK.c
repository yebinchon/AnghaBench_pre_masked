
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct credential {int password; int port; int protocol; scalar_t__ host; int username; scalar_t__ path; } ;
typedef int guint32 ;
typedef scalar_t__ GnomeKeyringResult ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,int *,scalar_t__,char*,int ,int *,int ,int ,int *) ;
 char* FUNC_4 (struct credential*) ;

__attribute__((used)) static int FUNC_5(struct credential *VAR_5)
{
 guint32 VAR_6;
 char *VAR_7 = ((void*)0);
 GnomeKeyringResult VAR_8;
 if (!VAR_5->protocol || !(VAR_5->host || VAR_5->path) ||
     !VAR_5->username || !VAR_5->password)
  return VAR_0;

 VAR_7 = FUNC_4(VAR_5);

 VAR_8 = FUNC_3(
    VAR_2,
    VAR_5->username,
    ((void*)0) ,
    VAR_5->host,
    VAR_7,
    VAR_5->protocol,
    ((void*)0) ,
    VAR_5->port,
    VAR_5->password,
    &VAR_6);

 FUNC_1(VAR_7);

 if (VAR_8 != VAR_4 &&
     VAR_8 != VAR_3) {
  FUNC_0("%s", FUNC_2(VAR_8));
  return VAR_0;
 }

 return VAR_1;
}
