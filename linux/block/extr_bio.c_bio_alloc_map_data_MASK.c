
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {int dummy; } ;
struct iov_iter {int nr_segs; int iov; } ;
struct bio_map_data {int iov; struct iov_iter iter; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct bio_map_data* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct bio_map_data*,int ,int) ;

__attribute__((used)) static struct bio_map_data *FUNC_3(struct iov_iter *VAR_2,
            gfp_t VAR_3)
{
 struct bio_map_data *VAR_4;
 if (VAR_2->nr_segs > VAR_0)
  return ((void*)0);

 VAR_4 = FUNC_0(FUNC_2(VAR_4, VAR_1, VAR_2->nr_segs), VAR_3);
 if (!VAR_4)
  return ((void*)0);
 FUNC_1(VAR_4->iov, VAR_2->iov, sizeof(struct iovec) * VAR_2->nr_segs);
 VAR_4->iter = *VAR_2;
 VAR_4->iter.iov = VAR_4->iov;
 return VAR_4;
}
