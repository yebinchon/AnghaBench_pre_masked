
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct era_metadata {TYPE_2__* writesets; TYPE_2__* current_writeset; int block_size; struct block_device* bdev; } ;
struct block_device {int dummy; } ;
typedef int sector_t ;
struct TYPE_3__ {void* root; } ;
struct TYPE_4__ {TYPE_1__ md; } ;


 struct era_metadata* FUNC_0 (int) ;
 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 (struct era_metadata*,int) ;
 int FUNC_2 (struct era_metadata*) ;
 struct era_metadata* FUNC_3 (int,int ) ;

__attribute__((used)) static struct era_metadata *FUNC_4(struct block_device *VAR_2,
       sector_t VAR_3,
       bool VAR_4)
{
 int VAR_5;
 struct era_metadata *VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_0);

 if (!VAR_6)
  return ((void*)0);

 VAR_6->bdev = VAR_2;
 VAR_6->block_size = VAR_3;

 VAR_6->writesets[0].md.root = VAR_1;
 VAR_6->writesets[1].md.root = VAR_1;
 VAR_6->current_writeset = &VAR_6->writesets[0];

 VAR_5 = FUNC_1(VAR_6, VAR_4);
 if (VAR_5) {
  FUNC_2(VAR_6);
  return FUNC_0(VAR_5);
 }

 return VAR_6;
}
