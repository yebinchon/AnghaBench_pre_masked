
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dirent {int d_name; } ;
struct TYPE_6__ {scalar_t__ buf; } ;
struct TYPE_5__ {TYPE_3__ path; int st; scalar_t__ basename; scalar_t__ relative_path; } ;
struct dir_iterator_int {int levels_nr; int flags; TYPE_2__ base; TYPE_1__* levels; } ;
struct TYPE_4__ {scalar_t__ prefix_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (char*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct dir_iterator_int *VAR_3,
       struct dirent *VAR_4)
{
 int VAR_5, VAR_6;

 FUNC_2(&VAR_3->base.path, VAR_4->d_name);




 VAR_3->base.relative_path = VAR_3->base.path.buf +
       VAR_3->levels[0].prefix_len;
 VAR_3->base.basename = VAR_3->base.path.buf +
         VAR_3->levels[VAR_3->levels_nr - 1].prefix_len;

 if (VAR_3->flags & VAR_0)
  VAR_5 = FUNC_1(VAR_3->base.path.buf, &VAR_3->base.st);
 else
  VAR_5 = FUNC_0(VAR_3->base.path.buf, &VAR_3->base.st);

 VAR_6 = VAR_2;
 if (VAR_5 && VAR_2 != VAR_1)
  FUNC_3("failed to stat '%s'", VAR_3->base.path.buf);

 VAR_2 = VAR_6;
 return VAR_5;
}
