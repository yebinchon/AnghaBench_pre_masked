
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct diff_filespec {unsigned long size; int cnt_data; int oid; scalar_t__ oid_valid; int mode; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct repository*,struct diff_filespec*,int ) ;
 scalar_t__ FUNC_2 (struct repository*,struct diff_filespec*,struct diff_filespec*,int *,int *,unsigned long*,unsigned long*) ;
 scalar_t__ FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(struct repository *VAR_2,
   struct diff_filespec *VAR_3,
   struct diff_filespec *VAR_4,
   int VAR_5,
   int *VAR_6)
{
 unsigned long VAR_7, VAR_8;
 unsigned long VAR_9, VAR_10, VAR_11;

 *VAR_6 = 0;



 if (FUNC_0(VAR_3->mode) != FUNC_0(VAR_4->mode)) {
  *VAR_6 = (int)VAR_0;
  return 1;
 }

 if (VAR_3->oid_valid && VAR_4->oid_valid &&
     FUNC_3(&VAR_3->oid, &VAR_4->oid))
  return 0;

 if (FUNC_1(VAR_2, VAR_3, 0) ||
     FUNC_1(VAR_2, VAR_4, 0))
  return 0;

 VAR_8 = ((VAR_3->size > VAR_4->size) ? VAR_3->size : VAR_4->size);
 if (VAR_8 < VAR_1)
  return 0;

 if (!VAR_3->size)
  return 0;

 if (FUNC_2(VAR_2, VAR_3, VAR_4,
       &VAR_3->cnt_data, &VAR_4->cnt_data,
       &VAR_9, &VAR_10))
  return 0;


 if (VAR_3->size < VAR_9)
  VAR_9 = VAR_3->size;
 if (VAR_4->size < VAR_10 + VAR_9) {
  if (VAR_9 < VAR_4->size)
   VAR_10 = VAR_4->size - VAR_9;
  else
   VAR_10 = 0;
 }
 VAR_11 = VAR_3->size - VAR_9;






 *VAR_6 = (int)(VAR_11 * VAR_0 / VAR_3->size);
 if (*VAR_6 > VAR_5)
  return 1;




 VAR_7 = VAR_11 + VAR_10;
 if (VAR_7 * VAR_0 / VAR_8 < VAR_5)
  return 0;




 if ((VAR_3->size * VAR_5 < VAR_11 * VAR_0) &&
     (VAR_10 * 20 < VAR_11) &&
     (VAR_10 * 20 < VAR_9))
  return 0;

 return 1;
}
