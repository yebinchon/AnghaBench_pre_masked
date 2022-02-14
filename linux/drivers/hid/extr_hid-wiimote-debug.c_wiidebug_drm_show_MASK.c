
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wiimote_debug {TYPE_1__* wdata; } ;
struct seq_file {struct wiimote_debug* private; } ;
typedef size_t __u8 ;
struct TYPE_4__ {size_t drm; int lock; } ;
struct TYPE_3__ {TYPE_2__ state; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,char const*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 char** VAR_1 ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_2, void *VAR_3)
{
 struct wiimote_debug *VAR_4 = VAR_2->private;
 const char *VAR_5 = ((void*)0);
 unsigned long VAR_6;
 __u8 VAR_7;

 FUNC_1(&VAR_4->wdata->state.lock, VAR_6);
 VAR_7 = VAR_4->wdata->state.drm;
 FUNC_2(&VAR_4->wdata->state.lock, VAR_6);

 if (VAR_7 < VAR_0)
  VAR_5 = VAR_1[VAR_7];
 if (!VAR_5)
  VAR_5 = "unknown";

 FUNC_0(VAR_2, "%s\n", VAR_5);

 return 0;
}
