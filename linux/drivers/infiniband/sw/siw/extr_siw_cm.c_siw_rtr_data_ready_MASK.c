
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sock {int sk_callback_lock; } ;
struct TYPE_7__ {int rx_suspend; } ;
struct siw_qp {TYPE_2__ rx_stream; } ;
struct siw_cep {int dummy; } ;
struct TYPE_6__ {struct siw_qp* data; } ;
struct TYPE_8__ {int count; TYPE_1__ arg; } ;
typedef TYPE_3__ read_descriptor_t ;
typedef int rd_desc ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct siw_cep*,int ,int ) ;
 int FUNC_5 (struct siw_cep*,struct siw_qp*) ;
 int VAR_1 ;
 struct siw_cep* FUNC_6 (struct sock*) ;
 struct siw_qp* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*,TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_9(struct sock *VAR_2)
{
 struct siw_cep *VAR_3;
 struct siw_qp *VAR_4 = ((void*)0);
 read_descriptor_t VAR_5;

 FUNC_2(&VAR_2->sk_callback_lock);

 VAR_3 = FUNC_6(VAR_2);
 if (!VAR_3) {
  FUNC_0(1, "No connection endpoint\n");
  goto out;
 }
 VAR_4 = FUNC_7(VAR_2);

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.arg.data = VAR_4;
 VAR_5.count = 1;

 FUNC_8(VAR_2, &VAR_5, VAR_1);






 if (!VAR_4->rx_stream.rx_suspend)
  FUNC_4(VAR_3, VAR_0, 0);
out:
 FUNC_3(&VAR_2->sk_callback_lock);
 if (VAR_4)
  FUNC_5(VAR_3, VAR_4);
}
