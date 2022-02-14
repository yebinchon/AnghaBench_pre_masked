
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int raid_disks; int degraded; int array_sectors; int new_level; int new_chunk_sectors; int new_layout; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct mddev*,int ) ;
 void* FUNC_3 (struct mddev*) ;

__attribute__((used)) static void *FUNC_4(struct mddev *VAR_4)
{
 int VAR_5;
 void *VAR_6;

 if (VAR_4->raid_disks != 2 ||
     VAR_4->degraded > 1)
  return FUNC_0(-VAR_1);



 VAR_5 = 64*2;


 while (VAR_5 && (VAR_4->array_sectors & (VAR_5-1)))
  VAR_5 >>= 1;

 if ((VAR_5<<9) < VAR_2)

  return FUNC_0(-VAR_1);

 VAR_4->new_level = 5;
 VAR_4->new_layout = VAR_0;
 VAR_4->new_chunk_sectors = VAR_5;

 VAR_6 = FUNC_3(VAR_4);
 if (!FUNC_1(VAR_6))
  FUNC_2(VAR_4,
   VAR_3);
 return VAR_6;
}
