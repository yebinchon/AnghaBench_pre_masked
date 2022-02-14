
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* priv_p ;
typedef int node_p ;
struct TYPE_4__ {int encap_proto; int encap_enable; scalar_t__ decap_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int,int ,int) ;

__attribute__((used)) static int
FUNC_3(node_p VAR_5)
{
 priv_p VAR_6;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1, VAR_2 | VAR_3);
 VAR_6->decap_enable = 0;
 VAR_6->encap_enable = VAR_4;
 VAR_6->encap_proto = FUNC_1(VAR_0);
 FUNC_0(VAR_5, VAR_6);
 return (0);
}
