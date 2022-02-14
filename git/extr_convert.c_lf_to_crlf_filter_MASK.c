
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stream_filter {int dummy; } ;
struct TYPE_2__ {int * vtbl; } ;
struct lf_to_crlf_filter {TYPE_1__ filter; } ;


 int VAR_0 ;
 struct lf_to_crlf_filter* FUNC_0 (int,int) ;

__attribute__((used)) static struct stream_filter *FUNC_1(void)
{
 struct lf_to_crlf_filter *VAR_1 = FUNC_0(1, sizeof(*VAR_1));

 VAR_1->filter.vtbl = &VAR_0;
 return (struct stream_filter *)VAR_1;
}
