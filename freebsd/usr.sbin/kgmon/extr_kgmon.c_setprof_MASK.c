
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct kvmvars {int kd; } ;
struct gmonparam {int state; } ;
typedef int state ;
typedef scalar_t__ ssize_t ;
struct TYPE_2__ {scalar_t__ n_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,int ,void*,size_t) ;
 TYPE_1__* VAR_6 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int*,int,int*,size_t*,int*,size_t) ;
 int FUNC_4 (char*,char*) ;

void
FUNC_5(struct kvmvars *VAR_7, int VAR_8)
{
 struct gmonparam *VAR_9 = (struct gmonparam *)VAR_6[VAR_4].n_value;
 size_t VAR_10;
 int VAR_11[3], VAR_12;

 VAR_10 = sizeof(VAR_8);
 if (!VAR_5) {
  VAR_11[0] = VAR_0;
  VAR_11[1] = VAR_3;
  VAR_11[2] = VAR_2;
  if (FUNC_3(VAR_11, 3, &VAR_12, &VAR_10, ((void*)0), 0) < 0)
   goto bad;
  if (VAR_12 == VAR_8)
   return;
  (void)FUNC_2(0);
  if (FUNC_3(VAR_11, 3, ((void*)0), ((void*)0), &VAR_8, VAR_10) >= 0) {
   (void)FUNC_2(FUNC_0());
   return;
  }
  (void)FUNC_2(FUNC_0());
 } else if (FUNC_1(VAR_7->kd, (u_long)&VAR_9->state, (void *)&VAR_8, VAR_10)
     == (ssize_t)VAR_10)
  return;
bad:
 FUNC_4("warning: cannot turn profiling %s",
     VAR_8 == VAR_1 ? "off" : "on");
}
