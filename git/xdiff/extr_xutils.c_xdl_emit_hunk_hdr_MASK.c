
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ (* out_hunk ) (int ,long,long,long,long,char const*,long) ;int priv; } ;
typedef TYPE_1__ xdemitcb_t ;


 scalar_t__ FUNC_0 (int ,long,long,long,long,char const*,long) ;
 int FUNC_1 (long,long,long,long,char const*,long,TYPE_1__*) ;

int FUNC_2(long VAR_0, long VAR_1, long VAR_2, long VAR_3,
        const char *VAR_4, long VAR_5,
        xdemitcb_t *VAR_6) {
 if (!VAR_6->out_hunk)
  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_6->out_hunk(VAR_6->priv,
     VAR_1 ? VAR_0 : VAR_0 - 1, VAR_1,
     VAR_3 ? VAR_2 : VAR_2 - 1, VAR_3,
     VAR_4, VAR_5) < 0)
  return -1;
 return 0;
}
