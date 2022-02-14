
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct lro_mbuf_sort {int seq; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct lro_mbuf_sort *VAR_0, uint32_t VAR_1)
{
 struct lro_mbuf_sort VAR_2;
 uint64_t VAR_3;
 uint64_t VAR_4;
 uint32_t VAR_5;
 uint32_t VAR_6;

repeat:

 if (VAR_1 <= 12) {
  for (VAR_5 = 1; VAR_5 < VAR_1; VAR_5++) {
   VAR_2 = VAR_0[VAR_5];
   for (VAR_6 = VAR_5; VAR_6 > 0 && VAR_2.seq < VAR_0[VAR_6 - 1].seq; VAR_6--)
    VAR_0[VAR_6] = VAR_0[VAR_6 - 1];
   VAR_0[VAR_6] = VAR_2;
  }
  return;
 }


 VAR_3 = 0;
 VAR_4 = 0;
 for (VAR_5 = 0; VAR_5 != VAR_1; VAR_5++) {
  VAR_3 |= VAR_0[VAR_5].seq;
  VAR_4 |= ~VAR_0[VAR_5].seq;
 }


 VAR_3 &= VAR_4;
 if (VAR_3 == 0)
  return;


 VAR_3 = FUNC_1(VAR_3);





 for (VAR_5 = VAR_6 = 0; VAR_6 != VAR_1; VAR_6++) {

  if (VAR_0[VAR_6].seq & VAR_3)
   continue;

  VAR_2 = VAR_0[VAR_5];
  VAR_0[VAR_5] = VAR_0[VAR_6];
  VAR_0[VAR_6] = VAR_2;
  VAR_5++;
 }

 FUNC_0(VAR_5 != 0 && VAR_5 != VAR_1, ("Memory is corrupted\n"));


 FUNC_2(VAR_0, VAR_5);


 VAR_0 += VAR_5;
 VAR_1 -= VAR_5;
 goto repeat;
}
