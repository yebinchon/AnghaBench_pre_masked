
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_pgtable_ops {int dummy; } ;
struct io_pgtable_init_fns {struct io_pgtable* (* alloc ) (struct io_pgtable_cfg*,void*) ;} ;
struct io_pgtable_cfg {int dummy; } ;
struct io_pgtable {int fmt; struct io_pgtable_ops ops; struct io_pgtable_cfg cfg; void* cookie; } ;
typedef enum io_pgtable_fmt { ____Placeholder_io_pgtable_fmt } io_pgtable_fmt ;


 int VAR_0 ;
 struct io_pgtable_init_fns** VAR_1 ;
 struct io_pgtable* FUNC_0 (struct io_pgtable_cfg*,void*) ;

struct io_pgtable_ops *FUNC_1(enum io_pgtable_fmt VAR_2,
         struct io_pgtable_cfg *VAR_3,
         void *VAR_4)
{
 struct io_pgtable *VAR_5;
 const struct io_pgtable_init_fns *VAR_6;

 if (VAR_2 >= VAR_0)
  return ((void*)0);

 VAR_6 = VAR_1[VAR_2];
 if (!VAR_6)
  return ((void*)0);

 VAR_5 = VAR_6->alloc(VAR_3, VAR_4);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->fmt = VAR_2;
 VAR_5->cookie = VAR_4;
 VAR_5->cfg = *VAR_3;

 return &VAR_5->ops;
}
