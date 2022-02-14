
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qdiff_sample {long qdiff; } ;
struct cdg {long num_samples; long sample_q_size; int qdiffmax_q; scalar_t__ max_qtrend; int qdiffmin_q; scalar_t__ min_qtrend; } ;


 int VAR_0 ;
 struct qdiff_sample* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct qdiff_sample*,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct qdiff_sample* FUNC_3 (int ,int ) ;

__attribute__((used)) static inline void
FUNC_4(struct cdg *VAR_3, long VAR_4, long VAR_5)
{
 struct qdiff_sample *VAR_6;

 ++VAR_3->num_samples;
 if (VAR_3->num_samples > VAR_3->sample_q_size) {

  VAR_6 = FUNC_0(&VAR_3->qdiffmin_q);
  VAR_3->min_qtrend = VAR_3->min_qtrend +
      (VAR_5 - VAR_6->qdiff) / VAR_3->sample_q_size;
  FUNC_2(&VAR_3->qdiffmin_q, VAR_1);
  VAR_6->qdiff = VAR_5;
  FUNC_1(&VAR_3->qdiffmin_q, VAR_6, VAR_1);


  VAR_6 = FUNC_0(&VAR_3->qdiffmax_q);
  VAR_3->max_qtrend = VAR_3->max_qtrend +
      (VAR_4 - VAR_6->qdiff) / VAR_3->sample_q_size;
  FUNC_2(&VAR_3->qdiffmax_q, VAR_1);
  VAR_6->qdiff = VAR_4;
  FUNC_1(&VAR_3->qdiffmax_q, VAR_6, VAR_1);
  --VAR_3->num_samples;
 } else {
  VAR_6 = FUNC_3(VAR_2, VAR_0);
  if (VAR_6 != ((void*)0)) {
   VAR_3->min_qtrend = VAR_3->min_qtrend +
       VAR_5 / VAR_3->sample_q_size;
   VAR_6->qdiff = VAR_5;
   FUNC_1(&VAR_3->qdiffmin_q, VAR_6,
       VAR_1);
  }

  VAR_6 = FUNC_3(VAR_2, VAR_0);
  if (VAR_6) {
   VAR_3->max_qtrend = VAR_3->max_qtrend +
       VAR_4 / VAR_3->sample_q_size;
   VAR_6->qdiff = VAR_4;
   FUNC_1(&VAR_3->qdiffmax_q, VAR_6,
       VAR_1);
  }
 }
}
