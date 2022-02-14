
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk {int min_write_pgs; unsigned long long nr_flush_rst; int * pad_dist; int nr_flush; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 unsigned long long FUNC_0 (int *) ;
 unsigned long long FUNC_1 (unsigned long long,unsigned long long) ;
 scalar_t__ FUNC_2 (char*,scalar_t__,char*,...) ;

__attribute__((used)) static ssize_t FUNC_3(struct pblk *VAR_1, char *VAR_2)
{
 int VAR_3 = 0;
 unsigned long long VAR_4;
 unsigned long long VAR_5 = 0;
 int VAR_6 = VAR_1->min_write_pgs - 1;
 int VAR_7;

 VAR_4 = FUNC_0(&VAR_1->nr_flush) - VAR_1->nr_flush_rst;
 if (!VAR_4) {
  for (VAR_7 = 0; VAR_7 < (VAR_6 + 1); VAR_7++)
   VAR_3 += FUNC_2(VAR_2 + VAR_3, VAR_0 - VAR_3,
    "%d:0 ", VAR_7);
  VAR_3 += FUNC_2(VAR_2 + VAR_3, VAR_0 - VAR_3, "\n");

  return VAR_3;
 }

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
  VAR_5 += FUNC_0(&VAR_1->pad_dist[VAR_7]);

 VAR_3 += FUNC_2(VAR_2 + VAR_3, VAR_0 - VAR_3, "0:%lld%% ",
  FUNC_1(VAR_4 - VAR_5, VAR_4));

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  unsigned long long VAR_8;

  VAR_8 = FUNC_1(FUNC_0(&VAR_1->pad_dist[VAR_7]),
       VAR_4);
  VAR_3 += FUNC_2(VAR_2 + VAR_3, VAR_0 - VAR_3, "%d:%lld%% ",
    VAR_7 + 1, VAR_8);
 }
 VAR_3 += FUNC_2(VAR_2 + VAR_3, VAR_0 - VAR_3, "\n");

 return VAR_3;
}
