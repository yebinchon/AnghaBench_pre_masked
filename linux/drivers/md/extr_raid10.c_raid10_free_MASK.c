
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r10conf {int bio_split; struct r10conf* mirrors_new; struct r10conf* mirrors_old; struct r10conf* mirrors; int tmppage; int r10bio_pool; } ;
struct mddev {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct r10conf*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct mddev *VAR_0, void *VAR_1)
{
 struct r10conf *VAR_2 = VAR_1;

 FUNC_2(&VAR_2->r10bio_pool);
 FUNC_3(VAR_2->tmppage);
 FUNC_1(VAR_2->mirrors);
 FUNC_1(VAR_2->mirrors_old);
 FUNC_1(VAR_2->mirrors_new);
 FUNC_0(&VAR_2->bio_split);
 FUNC_1(VAR_2);
}
