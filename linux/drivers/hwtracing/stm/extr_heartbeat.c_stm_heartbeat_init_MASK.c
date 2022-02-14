
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int function; } ;
struct TYPE_5__ {int nr_chans; int name; int unlink; int link; } ;
struct TYPE_6__ {TYPE_1__ data; TYPE_4__ hrtimer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_4__*,int ,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 TYPE_3__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(void)
{
 int VAR_11, VAR_12 = -VAR_2;

 if (VAR_6 < 0 || VAR_6 > VAR_5)
  return -VAR_1;

 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  VAR_7[VAR_11].data.name =
   FUNC_1(VAR_3, "heartbeat.%d", VAR_11);
  if (!VAR_7[VAR_11].data.name)
   goto fail_unregister;

  VAR_7[VAR_11].data.nr_chans = 1;
  VAR_7[VAR_11].data.link = VAR_9;
  VAR_7[VAR_11].data.unlink = VAR_10;
  FUNC_0(&VAR_7[VAR_11].hrtimer, VAR_0,
        VAR_4);
  VAR_7[VAR_11].hrtimer.function =
   VAR_8;

  VAR_12 = FUNC_3(((void*)0), &VAR_7[VAR_11].data);
  if (VAR_12)
   goto fail_free;
 }

 return 0;

fail_unregister:
 for (VAR_11--; VAR_11 >= 0; VAR_11--) {
  FUNC_4(&VAR_7[VAR_11].data);
fail_free:
  FUNC_2(VAR_7[VAR_11].data.name);
 }

 return VAR_12;
}
