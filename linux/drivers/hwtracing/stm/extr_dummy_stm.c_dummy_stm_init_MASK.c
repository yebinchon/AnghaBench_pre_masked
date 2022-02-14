
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; int link; int packet; scalar_t__ sw_nchannels; scalar_t__ sw_end; scalar_t__ sw_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_14, VAR_15 = -VAR_2;

 if (VAR_13 < 0 || VAR_13 > VAR_0)
  return -VAR_1;

 if (VAR_11 > VAR_10 ||
     VAR_10 > VAR_5 ||
     VAR_12 > VAR_4)
  return -VAR_1;

 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
  VAR_7[VAR_14].name = FUNC_0(VAR_3, "dummy_stm.%d", VAR_14);
  if (!VAR_7[VAR_14].name)
   goto fail_unregister;

  VAR_7[VAR_14].sw_start = VAR_11;
  VAR_7[VAR_14].sw_end = VAR_10;
  VAR_7[VAR_14].sw_nchannels = VAR_12;
  VAR_7[VAR_14].packet = VAR_9;
  VAR_7[VAR_14].link = VAR_8;

  VAR_15 = FUNC_2(((void*)0), &VAR_7[VAR_14], VAR_6);
  if (VAR_15)
   goto fail_free;
 }

 return 0;

fail_unregister:
 for (VAR_14--; VAR_14 >= 0; VAR_14--) {
  FUNC_3(&VAR_7[VAR_14]);
fail_free:
  FUNC_1(VAR_7[VAR_14].name);
 }

 return VAR_15;

}
