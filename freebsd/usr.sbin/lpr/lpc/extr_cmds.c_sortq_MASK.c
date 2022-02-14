
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char* d_name; } ;


 int FUNC_0 (char const*,int,char const*,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char const*,char const*) ;

__attribute__((used)) static int
FUNC_3(const struct dirent **VAR_0, const struct dirent **VAR_1)
{
 const int VAR_2 = -1, VAR_3 = 1, VAR_4 = 10;
 const char *VAR_5, *VAR_6, *VAR_7, *VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_5 = (*VAR_0)->d_name;
 VAR_6 = (*VAR_1)->d_name;
 do { VAR_9 = VAR_4; VAR_11 = *(VAR_5 + 2); VAR_7 = VAR_5 + 3; VAR_13 = 0; if ((*(VAR_5 + 1) == 'f') && (isalpha(VAR_11))) { VAR_13 = VAR_11; if (*VAR_5 == 'c') VAR_9 = 1; else if (*VAR_5 == 'd') VAR_9 = 2; else if (*VAR_5 == 'r') VAR_9 = 3; else if (*VAR_5 == 't') VAR_9 = 4; if (VAR_9 != VAR_4) { VAR_11 = *VAR_7; if (!isdigit(VAR_11)) { if (FUNC_0(VAR_11)) { VAR_7++; VAR_11 = *VAR_7; VAR_13 = (VAR_13 << 8) + VAR_11; } if (!FUNC_0(VAR_11)) VAR_9 = VAR_4; } } } } while (0);
 do { VAR_10 = VAR_4; VAR_11 = *(VAR_6 + 2); VAR_8 = VAR_6 + 3; VAR_14 = 0; if ((*(VAR_6 + 1) == 'f') && (FUNC_0(VAR_11))) { VAR_14 = VAR_11; if (*VAR_6 == 'c') VAR_10 = 1; else if (*VAR_6 == 'd') VAR_10 = 2; else if (*VAR_6 == 'r') VAR_10 = 3; else if (*VAR_6 == 't') VAR_10 = 4; if (VAR_10 != VAR_4) { VAR_11 = *VAR_8; if (!FUNC_0(VAR_11)) { if (FUNC_0(VAR_11)) { VAR_8++; VAR_11 = *VAR_8; VAR_14 = (VAR_14 << 8) + VAR_11; } if (!FUNC_0(VAR_11)) VAR_10 = VAR_4; } } } } while (0);




 if ((VAR_9 >= VAR_4) || (VAR_10 >= VAR_4)) {

  if (VAR_9 == VAR_10)
   VAR_12 = FUNC_2(VAR_5, VAR_6);
  else if (VAR_9 < VAR_10)
   VAR_12 = VAR_2;
  else
   VAR_12 = VAR_3;
  goto have_res;
 }





 VAR_12 = FUNC_2(VAR_7, VAR_8);
 if (VAR_12 != 0)
  goto have_res;





 if (VAR_9 < VAR_10) {
  VAR_12 = VAR_2;
  goto have_res;
 } else if (VAR_9 > VAR_10) {
  VAR_12 = VAR_3;
  goto have_res;
 }





 if (VAR_13 < VAR_14) {
  VAR_12 = VAR_2;
  goto have_res;
 } else if (VAR_13 > VAR_14) {
  VAR_12 = VAR_3;
  goto have_res;
 }
 FUNC_1("\t*** Error in sortq: %s == %s !\n", VAR_5, VAR_6);
 FUNC_1("\t***       cat %d == %d ; seq = %d %d\n", VAR_9, VAR_10,
     VAR_13, VAR_14);
 VAR_12 = 0;

have_res:
 return VAR_12;
}
