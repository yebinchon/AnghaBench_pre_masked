
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int bio_split; } ;
struct TYPE_2__ {int bi_sector; } ;
struct bio {TYPE_1__ bi_iter; int bi_opf; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (struct bio*,struct bio*) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*,int ) ;
 struct bio* FUNC_3 (struct request_queue*,struct bio*,int *,unsigned int*) ;
 struct bio* FUNC_4 (struct request_queue*,struct bio*,int *,unsigned int*) ;
 struct bio* FUNC_5 (struct request_queue*,struct bio*,int *,unsigned int*) ;
 struct bio* FUNC_6 (struct request_queue*,struct bio*,int *,unsigned int*) ;
 int FUNC_7 (struct bio*) ;
 int FUNC_8 (struct request_queue*,struct bio*,int ) ;

void FUNC_9(struct request_queue *VAR_2, struct bio **VAR_3,
  unsigned int *VAR_4)
{
 struct bio *VAR_5;

 switch (FUNC_1(*VAR_3)) {
 case 131:
 case 130:
  VAR_5 = FUNC_3(VAR_2, *VAR_3, &VAR_2->bio_split, VAR_4);
  break;
 case 128:
  VAR_5 = FUNC_6(VAR_2, *VAR_3, &VAR_2->bio_split,
    VAR_4);
  break;
 case 129:
  VAR_5 = FUNC_5(VAR_2, *VAR_3, &VAR_2->bio_split,
    VAR_4);
  break;
 default:
  VAR_5 = FUNC_4(VAR_2, *VAR_3, &VAR_2->bio_split, VAR_4);
  break;
 }

 if (VAR_5) {

  VAR_5->bi_opf |= VAR_1;
  FUNC_2(*VAR_3, VAR_0);

  FUNC_0(VAR_5, *VAR_3);
  FUNC_8(VAR_2, VAR_5, (*VAR_3)->bi_iter.bi_sector);
  FUNC_7(*VAR_3);
  *VAR_3 = VAR_5;
 }
}
