
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int ,int) ;

__attribute__((used)) static inline int FUNC_1(long VAR_0, int VAR_1)
{
 if (VAR_1) {
  return FUNC_0(VAR_0 / VAR_1, 0, 0xffff);
 } else {
  return (VAR_0 <= 0) ? 0xffff :
   FUNC_0(90000 * 60 / VAR_0, 0, 0xfffe);
 }
}
