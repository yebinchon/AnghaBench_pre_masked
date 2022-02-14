
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_handle {struct bh_priv* private; } ;
struct bh_priv {unsigned long* seen; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (char*,unsigned int,unsigned int,int) ;
 unsigned int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,unsigned long,int) ;
 TYPE_1__* VAR_2 ;
 unsigned long VAR_3 ;

__attribute__((used)) static void FUNC_3(struct input_handle *VAR_4,
      unsigned int VAR_5, unsigned int VAR_6, int VAR_7)
{
 struct bh_priv *VAR_8 = VAR_4->private;
 unsigned long VAR_9 = VAR_3;
 int VAR_10;

 FUNC_0("event type=%u, code=%u, value=%d\n", VAR_5, VAR_6, VAR_7);

 if (VAR_5 != VAR_0)
  return;

 VAR_10 = FUNC_1(VAR_6);
 if (VAR_10 < 0)
  return;

 FUNC_2(VAR_2[VAR_10].name,
   (VAR_9 - VAR_8->seen[VAR_10]) / VAR_1, VAR_7);
 VAR_8->seen[VAR_10] = VAR_9;
}
