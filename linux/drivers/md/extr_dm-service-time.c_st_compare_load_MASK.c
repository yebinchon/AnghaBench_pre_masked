
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path_info {int relative_throughput; int in_flight_size; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct path_info *VAR_2, struct path_info *VAR_3,
      size_t VAR_4)
{
 size_t VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_5 = FUNC_0(&VAR_2->in_flight_size);
 VAR_6 = FUNC_0(&VAR_3->in_flight_size);




 if (VAR_2->relative_throughput == VAR_3->relative_throughput)
  return VAR_5 - VAR_6;





 if (VAR_5 == VAR_6 ||
     !VAR_2->relative_throughput || !VAR_3->relative_throughput)
  return VAR_3->relative_throughput - VAR_2->relative_throughput;
 VAR_5 += VAR_4;
 VAR_6 += VAR_4;
 if (FUNC_1(VAR_5 >= VAR_0 ||
       VAR_6 >= VAR_0)) {





  VAR_5 >>= VAR_1;
  VAR_6 >>= VAR_1;
 }
 VAR_7 = VAR_5 * VAR_3->relative_throughput;
 VAR_8 = VAR_6 * VAR_2->relative_throughput;
 if (VAR_7 != VAR_8)
  return VAR_7 - VAR_8;




 return VAR_3->relative_throughput - VAR_2->relative_throughput;
}
