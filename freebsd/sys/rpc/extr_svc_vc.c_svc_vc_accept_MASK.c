
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int si_note; } ;
struct socket {int so_options; short so_state; TYPE_1__ so_rdsel; } ;
struct TYPE_4__ {int td_ucred; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct socket*) ;
 int VAR_1 ;
 short VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_2 (int ,struct socket*) ;
 int FUNC_3 (struct socket*,struct socket**,int ) ;

int
FUNC_4(struct socket *VAR_4, struct socket **VAR_5)
{
 struct socket *VAR_6;
 int VAR_7 = 0;
 short VAR_8;


 if ((VAR_4->so_options & VAR_1) == 0) {
  VAR_7 = VAR_0;
  goto done;
 }
 FUNC_1(VAR_4);
 VAR_8 = VAR_4->so_state & VAR_2;
 VAR_4->so_state |= VAR_2;
 VAR_7 = FUNC_3(VAR_4, &VAR_6, 0);
 VAR_4->so_state &= (VAR_8 & ~VAR_2);
 if (VAR_7)
  goto done;

 VAR_6->so_state |= VAR_8;
 *VAR_5 = VAR_6;


 FUNC_0(&VAR_4->so_rdsel.si_note, 0);
done:
 return (VAR_7);
}
