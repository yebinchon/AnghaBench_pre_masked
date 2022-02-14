
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct merge_options {scalar_t__ detect_renames; } ;



__attribute__((used)) static inline int FUNC_0(struct merge_options *VAR_0)
{
 return (VAR_0->detect_renames >= 0) ? VAR_0->detect_renames : 1;
}
