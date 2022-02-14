
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_number_mapping {int member_0; int member_1; int member_2; int member_3; } ;
struct fingerprint {int dummy; } ;
struct blame_origin {struct fingerprint* fingerprints; } ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int,int,int,int,struct fingerprint*,struct fingerprint*,int*,int*,int*,int*,int,int,struct line_number_mapping*) ;
 int* FUNC_2 (int,int) ;

__attribute__((used)) static int *FUNC_3(struct blame_origin *VAR_1,
          struct blame_origin *VAR_2,
          int VAR_3, int VAR_4, int VAR_5,
          int VAR_6)
{


 int VAR_7 = VAR_4;
 int VAR_8 = VAR_6;
 int VAR_9 = VAR_3;
 int VAR_10 = VAR_5 - VAR_3;

 struct line_number_mapping VAR_11 = {
  VAR_7, VAR_8, VAR_9, VAR_10
 };

 struct fingerprint *VAR_12 = VAR_1->fingerprints;
 struct fingerprint *VAR_13 = VAR_2->fingerprints;

 int VAR_14, *VAR_15, *VAR_16,
  *VAR_17, *VAR_18, VAR_19;
 int VAR_20 = 10, VAR_21;

 if (VAR_8 <= 0)
  return ((void*)0);

 if (VAR_20 >= VAR_8)
  VAR_20 = VAR_8 ? VAR_8 - 1 : 0;

 VAR_21 = ((2 * VAR_20 + 1) * VAR_10
     - 1) / VAR_8;

 VAR_15 = FUNC_2(sizeof(int), VAR_10);
 VAR_16 = FUNC_2(sizeof(int), VAR_10);
 VAR_17 = FUNC_2(sizeof(int), VAR_10);


 VAR_19 = VAR_10 * (VAR_20 * 2 + 1);
 VAR_18 = FUNC_2(sizeof(int), VAR_19);

 for (VAR_14 = 0; VAR_14 < VAR_10; ++VAR_14) {
  VAR_15[VAR_14] = -1;
  VAR_16[VAR_14] = -1;
  VAR_17[VAR_14] = VAR_0;
 }

 for (VAR_14 = 0; VAR_14 < VAR_19; ++VAR_14)
  VAR_18[VAR_14] = -1;

 FUNC_1(VAR_7, VAR_9,
       VAR_8, VAR_10,
       VAR_12 + VAR_7,
       VAR_13 + VAR_9,
       VAR_18,
       VAR_17,
       VAR_16,
       VAR_15,
       VAR_20,
       VAR_21,
       &VAR_11);

 FUNC_0(VAR_18);
 FUNC_0(VAR_17);
 FUNC_0(VAR_16);

 return VAR_15;
}
