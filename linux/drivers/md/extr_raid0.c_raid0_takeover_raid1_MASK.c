
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void r0conf ;
struct mddev {int raid_disks; int degraded; int array_sectors; int new_chunk_sectors; int chunk_sectors; int delta_disks; int recovery_cp; scalar_t__ new_layout; scalar_t__ new_level; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mddev*,void**) ;
 int FUNC_2 (struct mddev*,int ) ;
 int FUNC_3 (struct mddev*) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static void *FUNC_5(struct mddev *VAR_4)
{
 struct r0conf *VAR_5;
 int VAR_6;




 if ((VAR_4->raid_disks - 1) != VAR_4->degraded) {
  FUNC_4("md/raid0:%s: (N - 1) mirrors drives must be already faulty!\n",
         FUNC_3(VAR_4));
  return FUNC_0(-VAR_0);
 }





 VAR_6 = 64 * 2;


 while (VAR_6 && (VAR_4->array_sectors & (VAR_6 - 1)))
  VAR_6 >>= 1;

 if ((VAR_6 << 9) < VAR_2)

  return FUNC_0(-VAR_0);


 VAR_4->new_level = 0;
 VAR_4->new_layout = 0;
 VAR_4->new_chunk_sectors = VAR_6;
 VAR_4->chunk_sectors = VAR_6;
 VAR_4->delta_disks = 1 - VAR_4->raid_disks;
 VAR_4->raid_disks = 1;

 VAR_4->recovery_cp = VAR_1;
 FUNC_2(VAR_4, VAR_3);

 FUNC_1(VAR_4, &VAR_5);
 return VAR_5;
}
