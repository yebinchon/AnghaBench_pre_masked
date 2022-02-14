
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct patch {scalar_t__ is_rename; scalar_t__ is_copy; scalar_t__ is_new; scalar_t__ old_mode; scalar_t__ new_mode; scalar_t__ is_delete; } ;



__attribute__((used)) static inline int FUNC_0(struct patch *VAR_0)
{
 return VAR_0->is_rename > 0 ||
  VAR_0->is_copy > 0 ||
  VAR_0->is_new > 0 ||
  VAR_0->is_delete ||
  (VAR_0->old_mode && VAR_0->new_mode &&
   VAR_0->old_mode != VAR_0->new_mode);
}
