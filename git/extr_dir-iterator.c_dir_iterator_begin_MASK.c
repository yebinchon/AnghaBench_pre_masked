
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int st_mode; } ;
struct TYPE_4__ {int buf; } ;
struct dir_iterator {TYPE_3__ st; TYPE_1__ path; } ;
struct dir_iterator_int {unsigned int flags; struct dir_iterator base; scalar_t__ levels_nr; int levels_alloc; int levels; } ;


 int FUNC_0 (int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dir_iterator*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ,TYPE_3__*) ;
 int FUNC_4 (TYPE_1__*,char const*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 struct dir_iterator_int* FUNC_6 (int,int) ;

struct dir_iterator *FUNC_7(const char *VAR_3, unsigned int VAR_4)
{
 struct dir_iterator_int *VAR_5 = FUNC_6(1, sizeof(*VAR_5));
 struct dir_iterator *VAR_6 = &VAR_5->base;
 int VAR_7;

 FUNC_5(&VAR_5->base.path, VAR_1);
 FUNC_4(&VAR_5->base.path, VAR_3);

 FUNC_0(VAR_5->levels, 10, VAR_5->levels_alloc);
 VAR_5->levels_nr = 0;
 VAR_5->flags = VAR_4;





 if (FUNC_3(VAR_5->base.path.buf, &VAR_5->base.st) < 0) {
  VAR_7 = VAR_2;
  goto error_out;
 }

 if (!FUNC_1(VAR_5->base.st.st_mode)) {
  VAR_7 = VAR_0;
  goto error_out;
 }

 return VAR_6;

error_out:
 FUNC_2(VAR_6);
 VAR_2 = VAR_7;
 return ((void*)0);
}
