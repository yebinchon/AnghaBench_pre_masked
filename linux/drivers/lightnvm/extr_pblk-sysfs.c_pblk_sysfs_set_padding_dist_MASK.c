
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk {int min_write_pgs; int nr_flush; int nr_flush_rst; int * pad_dist; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (char const*,int ,int*) ;
 size_t FUNC_3 (char const*,char*) ;

__attribute__((used)) static ssize_t FUNC_4(struct pblk *VAR_1,
   const char *VAR_2, size_t VAR_3)
{
 size_t VAR_4;
 int VAR_5;
 int VAR_6 = VAR_1->min_write_pgs - 1;
 int VAR_7;

 VAR_4 = FUNC_3(VAR_2, "\n");
 if (VAR_4 >= VAR_3)
  return -VAR_0;

 if (FUNC_2(VAR_2, 0, &VAR_5))
  return -VAR_0;

 if (VAR_5 != 0)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
  FUNC_1(&VAR_1->pad_dist[VAR_7], 0);

 VAR_1->nr_flush_rst = FUNC_0(&VAR_1->nr_flush);

 return VAR_3;
}
