
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_frent {scalar_t__ fe_off; scalar_t__ fe_len; } ;
struct pf_fragment {int* fr_entries; int fr_holes; struct pf_frent** fr_firstoff; int fr_queue; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 int FUNC_2 (int *,struct pf_frent*,struct pf_frent*,int ) ;
 int FUNC_3 (int *,struct pf_frent*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (struct pf_frent*) ;
 int FUNC_5 (struct pf_frent*) ;

__attribute__((used)) static int
FUNC_6(struct pf_fragment *VAR_3, struct pf_frent *VAR_4,
    struct pf_frent *VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_1 <= 0xff);






 VAR_6 = FUNC_5(VAR_4);
 if (VAR_3->fr_entries[VAR_6] >= VAR_1)
  return VAR_0;
 VAR_3->fr_entries[VAR_6]++;

 if (VAR_5 == ((void*)0)) {
  FUNC_3(&VAR_3->fr_queue, VAR_4, VAR_2);
 } else {
  FUNC_1(VAR_5->fe_off + VAR_5->fe_len <= VAR_4->fe_off,
      ("overlapping fragment"));
  FUNC_2(&VAR_3->fr_queue, VAR_5, VAR_4, VAR_2);
 }

 if (VAR_3->fr_firstoff[VAR_6] == ((void*)0)) {
  FUNC_1(VAR_5 == ((void*)0) || FUNC_5(VAR_5) < VAR_6,
      ("prev == NULL || pf_frent_index(pref) < index"));
  VAR_3->fr_firstoff[VAR_6] = VAR_4;
 } else {
  if (VAR_4->fe_off < VAR_3->fr_firstoff[VAR_6]->fe_off) {
   FUNC_1(VAR_5 == ((void*)0) || FUNC_5(VAR_5) < VAR_6,
       ("prev == NULL || pf_frent_index(pref) < index"));
   VAR_3->fr_firstoff[VAR_6] = VAR_4;
  } else {
   FUNC_1(VAR_5 != ((void*)0), ("prev != NULL"));
   FUNC_1(FUNC_5(VAR_5) == VAR_6,
       ("pf_frent_index(prev) == index"));
  }
 }

 VAR_3->fr_holes += FUNC_4(VAR_4);

 return 0;
}
