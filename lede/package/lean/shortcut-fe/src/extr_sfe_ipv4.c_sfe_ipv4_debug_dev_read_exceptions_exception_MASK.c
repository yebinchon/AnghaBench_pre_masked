
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct sfe_ipv4_debug_xml_write_state {size_t iter_exception; int state; } ;
struct sfe_ipv4 {int lock; scalar_t__* exception_events64; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (char*,char*,int ) ;
 char** VAR_2 ;
 int FUNC_1 (char*,int ,char*,char*,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4(struct sfe_ipv4 *VAR_3, char *VAR_4, char *VAR_5, size_t *VAR_6,
        int *VAR_7, struct sfe_ipv4_debug_xml_write_state *VAR_8)
{
 u64 VAR_9;

 FUNC_2(&VAR_3->lock);
 VAR_9 = VAR_3->exception_events64[VAR_8->iter_exception];
 FUNC_3(&VAR_3->lock);

 if (VAR_9) {
  int VAR_10;

  VAR_10 = FUNC_1(VAR_5, VAR_0,
          "\t\t<exception name=\"%s\" count=\"%llu\" />\n",
          VAR_2[VAR_8->iter_exception],
          VAR_9);
  if (FUNC_0(VAR_4 + *VAR_7, VAR_5, VAR_0)) {
   return 0;
  }

  *VAR_6 -= VAR_10;
  *VAR_7 += VAR_10;
 }

 VAR_8->iter_exception++;
 if (VAR_8->iter_exception >= VAR_1) {
  VAR_8->iter_exception = 0;
  VAR_8->state++;
 }

 return 1;
}
