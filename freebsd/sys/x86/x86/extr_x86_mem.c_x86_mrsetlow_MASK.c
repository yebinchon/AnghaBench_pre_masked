
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_range_softc {int dummy; } ;
struct mem_range_desc {int mr_flags; int mr_owner; scalar_t__ mr_len; scalar_t__ mr_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int,int) ;
 struct mem_range_desc* FUNC_2 (struct mem_range_softc*,scalar_t__) ;

__attribute__((used)) static int
FUNC_3(struct mem_range_softc *VAR_6, struct mem_range_desc *VAR_7, int *VAR_8)
{
 struct mem_range_desc *VAR_9, *VAR_10, *VAR_11;


 if ((VAR_9 = FUNC_2(VAR_6, VAR_7->mr_base)) == ((void*)0) ||
     (VAR_10 = FUNC_2(VAR_6, VAR_7->mr_base + VAR_7->mr_len - 1))
     == ((void*)0))
  return (VAR_1);


 if ((VAR_7->mr_flags & VAR_4) == 0) {
  for (VAR_11 = VAR_9; VAR_11 <= VAR_10; VAR_11++) {
   if ((VAR_11->mr_flags & VAR_2) == VAR_5)
    return (VAR_0);
  }
 }


 for (VAR_11 = VAR_9; VAR_11 <= VAR_10; VAR_11++) {
  VAR_11->mr_flags = FUNC_1(VAR_11->mr_flags &
      ~VAR_3, VAR_7->mr_flags);
  FUNC_0(VAR_7->mr_owner, VAR_11->mr_owner, sizeof(VAR_7->mr_owner));
 }

 return (0);
}
