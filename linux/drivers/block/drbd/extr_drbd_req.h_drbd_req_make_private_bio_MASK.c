
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_request {struct bio* private_bio; } ;
struct bio {int * bi_next; int bi_end_io; struct drbd_request* bi_private; } ;


 int VAR_0 ;
 struct bio* FUNC_0 (struct bio*,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_1(struct drbd_request *VAR_3, struct bio *VAR_4)
{
 struct bio *VAR_5;
 VAR_5 = FUNC_0(VAR_4, VAR_0, &VAR_1);

 VAR_3->private_bio = VAR_5;

 VAR_5->bi_private = VAR_3;
 VAR_5->bi_end_io = VAR_2;
 VAR_5->bi_next = ((void*)0);
}
