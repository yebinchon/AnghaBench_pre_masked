
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ url; } ;
typedef TYPE_1__ git_proxy_options ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__ const*,int) ;

int FUNC_4(git_proxy_options *VAR_1, const git_proxy_options *VAR_2)
{
 if (!VAR_2) {
  FUNC_2(VAR_1, VAR_0);
  return 0;
 }

 FUNC_3(VAR_1, VAR_2, sizeof(git_proxy_options));
 if (VAR_2->url) {
  VAR_1->url = FUNC_1(VAR_2->url);
  FUNC_0(VAR_1->url);
 }

 return 0;
}
