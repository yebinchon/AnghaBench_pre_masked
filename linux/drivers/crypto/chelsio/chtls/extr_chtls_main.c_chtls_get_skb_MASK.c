
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct tcphdr {int dummy; } ;
struct chtls_dev {TYPE_1__* askb; } ;
struct TYPE_4__ {int len; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct chtls_dev *VAR_2)
{
 VAR_2->askb = FUNC_0(sizeof(struct tcphdr), VAR_1);
 if (!VAR_2->askb)
  return -VAR_0;

 FUNC_2(VAR_2->askb, sizeof(struct tcphdr));
 FUNC_3(VAR_2->askb);
 FUNC_1(VAR_2->askb->data, 0, VAR_2->askb->len);
 return 0;
}
