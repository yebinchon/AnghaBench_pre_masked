
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i_len; int i_data; int i_type; } ;
struct wlanstatfoo_p {TYPE_1__ ireq; int s; int mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_1(struct wlanstatfoo_p *VAR_3)
{
 VAR_3->ireq.i_type = VAR_1;
 VAR_3->ireq.i_data = VAR_3->mac;
 VAR_3->ireq.i_len = VAR_0;
 return FUNC_0(VAR_3->s, VAR_2, &VAR_3->ireq);
}
