
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct keybuf_key {int key; struct dirty_io* private; } ;
struct dirty_io {TYPE_2__* dc; } ;
struct bio {int bi_status; struct keybuf_key* bi_private; } ;
struct TYPE_3__ {int c; } ;
struct TYPE_4__ {TYPE_1__ disk; } ;


 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,int ,int,char*) ;
 int FUNC_2 (struct bio*) ;

__attribute__((used)) static void FUNC_3(struct bio *VAR_0)
{
 struct keybuf_key *VAR_1 = VAR_0->bi_private;
 struct dirty_io *VAR_2 = VAR_1->private;


 FUNC_1(FUNC_0(VAR_2->dc->disk.c, &VAR_1->key, 0),
       VAR_0->bi_status, 1,
       "reading dirty data from cache");

 FUNC_2(VAR_0);
}
