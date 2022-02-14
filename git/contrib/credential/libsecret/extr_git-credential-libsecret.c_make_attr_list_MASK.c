
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct credential {scalar_t__ path; scalar_t__ port; scalar_t__ host; scalar_t__ protocol; scalar_t__ username; } ;
typedef int GHashTable ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int * FUNC_1 (int ,int ,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,scalar_t__) ;

__attribute__((used)) static GHashTable *FUNC_4(struct credential *VAR_3)
{
 GHashTable *VAR_4 = FUNC_1(VAR_2, VAR_1, ((void*)0), VAR_0);

 if (VAR_3->username)
  FUNC_0(VAR_4, "user", FUNC_2(VAR_3->username));
 if (VAR_3->protocol)
  FUNC_0(VAR_4, "protocol", FUNC_2(VAR_3->protocol));
 if (VAR_3->host)
  FUNC_0(VAR_4, "server", FUNC_2(VAR_3->host));
 if (VAR_3->port)
  FUNC_0(VAR_4, "port", FUNC_3("%hu", VAR_3->port));
 if (VAR_3->path)
  FUNC_0(VAR_4, "object", FUNC_2(VAR_3->path));

 return VAR_4;
}
