
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct scatterlist {unsigned long length; scalar_t__ offset; } ;
struct rnd_state {int dummy; } ;
struct TYPE_3__ {unsigned long nents; struct scatterlist* sgl; } ;
struct pfn_table {unsigned long start; unsigned long end; TYPE_1__ st; } ;
typedef unsigned long (* npages_fn_t ) (unsigned long,unsigned long,struct rnd_state*) ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (int ,int ,unsigned long) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (TYPE_1__*,unsigned long,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct scatterlist*) ;
 struct scatterlist* FUNC_8 (struct scatterlist*) ;
 int FUNC_9 (struct scatterlist*) ;
 int FUNC_10 (struct scatterlist*,int ,unsigned long,int ) ;

__attribute__((used)) static int FUNC_11(struct pfn_table *VAR_6,
         unsigned long VAR_7, unsigned long VAR_8,
         npages_fn_t VAR_9,
         struct rnd_state *VAR_10,
         int VAR_11)
{
 struct scatterlist *VAR_12;
 unsigned long VAR_13, VAR_14;

 if (FUNC_5(&VAR_6->st, VAR_8,
      VAR_1 | VAR_4 | VAR_5))
  return VAR_11;


 FUNC_0(FUNC_1(VAR_7 * VAR_2, VAR_12->length));





 VAR_6->start = VAR_3;
 VAR_14 = VAR_6->start;
 VAR_12 = VAR_6->st.sgl;
 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
  unsigned long VAR_15 = VAR_9(VAR_13, VAR_7, VAR_10);


  if (!FUNC_2(FUNC_4(VAR_14),
         FUNC_4(VAR_14 + VAR_15),
         VAR_15)) {
   FUNC_6(&VAR_6->st);
   return -VAR_0;
  }

  if (VAR_13)
   VAR_12 = FUNC_8(VAR_12);
  FUNC_10(VAR_12, FUNC_4(VAR_14), VAR_15 * VAR_2, 0);

  FUNC_0(FUNC_3(FUNC_9(VAR_12)) != VAR_14);
  FUNC_0(VAR_12->length != VAR_15 * VAR_2);
  FUNC_0(VAR_12->offset != 0);

  VAR_14 += VAR_15;
 }
 FUNC_7(VAR_12);
 VAR_6->st.nents = VAR_13;
 VAR_6->end = VAR_14;

 return 0;
}
