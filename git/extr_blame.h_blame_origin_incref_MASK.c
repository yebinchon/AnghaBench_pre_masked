
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blame_origin {int refcnt; } ;



__attribute__((used)) static inline struct blame_origin *FUNC_0(struct blame_origin *VAR_0)
{
 if (VAR_0)
  VAR_0->refcnt++;
 return VAR_0;
}
