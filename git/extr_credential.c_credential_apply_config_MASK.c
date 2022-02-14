
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct credential {int configured; int path; int protocol; int use_http_path; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct credential*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct credential *VAR_1)
{
 if (VAR_1->configured)
  return;
 FUNC_1(VAR_0, VAR_1);
 VAR_1->configured = 1;

 if (!VAR_1->use_http_path && FUNC_2(VAR_1->protocol)) {
  FUNC_0(VAR_1->path);
 }
}
