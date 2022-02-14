
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct diff_filespec {unsigned long size; int cnt_data; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct repository*,struct diff_filespec*,int ) ;
 scalar_t__ FUNC_2 (struct repository*,struct diff_filespec*,struct diff_filespec*,int *,int *,unsigned long*,unsigned long*) ;

__attribute__((used)) static int FUNC_3(struct repository *VAR_2,
          struct diff_filespec *VAR_3,
          struct diff_filespec *VAR_4,
          int VAR_5)
{
 unsigned long VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11;





 if (!FUNC_0(VAR_3->mode) || !FUNC_0(VAR_4->mode))
  return 0;
 if (!VAR_3->cnt_data &&
     FUNC_1(VAR_2, VAR_3, VAR_0))
  return 0;
 if (!VAR_4->cnt_data &&
     FUNC_1(VAR_2, VAR_4, VAR_0))
  return 0;

 VAR_6 = ((VAR_3->size > VAR_4->size) ? VAR_3->size : VAR_4->size);
 VAR_8 = ((VAR_3->size < VAR_4->size) ? VAR_3->size : VAR_4->size);
 VAR_7 = VAR_6 - VAR_8;
 if (VAR_6 * (VAR_1-VAR_5) < VAR_7 * VAR_1)
  return 0;

 if (!VAR_3->cnt_data && FUNC_1(VAR_2, VAR_3, 0))
  return 0;
 if (!VAR_4->cnt_data && FUNC_1(VAR_2, VAR_4, 0))
  return 0;

 if (FUNC_2(VAR_2, VAR_3, VAR_4,
       &VAR_3->cnt_data, &VAR_4->cnt_data,
       &VAR_9, &VAR_10))
  return 0;




 if (!VAR_4->size)
  VAR_11 = 0;
 else
  VAR_11 = (int)(VAR_9 * VAR_1 / VAR_6);
 return VAR_11;
}
