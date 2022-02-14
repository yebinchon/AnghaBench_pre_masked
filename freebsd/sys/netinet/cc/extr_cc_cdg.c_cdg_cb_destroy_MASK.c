
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qdiff_sample {int dummy; } ;
struct cdg {int qdiffmax_q; int qdiffmin_q; } ;
struct cc_var {struct cdg* cc_data; } ;


 int VAR_0 ;
 struct qdiff_sample* FUNC_0 (int *) ;
 struct qdiff_sample* FUNC_1 (struct qdiff_sample*,int ) ;
 int FUNC_2 (struct cdg*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,struct qdiff_sample*) ;

__attribute__((used)) static void
FUNC_4(struct cc_var *VAR_3)
{
 struct cdg *VAR_4;
 struct qdiff_sample *VAR_5, *VAR_6;

 VAR_4 = VAR_3->cc_data;

 VAR_5 = FUNC_0(&VAR_4->qdiffmin_q);
 while (VAR_5 != ((void*)0)) {
  VAR_6 = FUNC_1(VAR_5, VAR_1);
  FUNC_3(VAR_2,VAR_5);
  VAR_5 = VAR_6;
 }

 VAR_5 = FUNC_0(&VAR_4->qdiffmax_q);
 while (VAR_5 != ((void*)0)) {
  VAR_6 = FUNC_1(VAR_5, VAR_1);
  FUNC_3(VAR_2,VAR_5);
  VAR_5 = VAR_6;
 }

 FUNC_2(VAR_3->cc_data, VAR_0);
}
