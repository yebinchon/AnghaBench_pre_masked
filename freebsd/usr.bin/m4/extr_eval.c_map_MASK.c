
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char*,char const*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_1(char *VAR_1, const char *VAR_2, const char *VAR_3, const char *VAR_4)
{
 const char *VAR_5;
 unsigned char VAR_6, VAR_7;
 static char VAR_8[257];
 static char VAR_9[257];
 int VAR_10;
 char VAR_11[256];
 static unsigned char VAR_12[256] = {
     0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18,
     19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35,
     36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52,
     53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69,
     70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86,
     87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102,
     103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115,
     116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128,
     129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141,
     142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154,
     155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167,
     168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180,
     181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193,
     194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206,
     207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219,
     220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232,
     233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245,
     246, 247, 248, 249, 250, 251, 252, 253, 254, 255
 };

 if (*VAR_2) {
  if (VAR_0) {



   VAR_3 = FUNC_0(VAR_8, VAR_8 + 256, VAR_3);
   VAR_4 = FUNC_0(VAR_9, VAR_9 + 256, VAR_4);
  }
  VAR_5 = VAR_3;




  for (VAR_10 = 0; VAR_10 < 256; VAR_10++)
   VAR_11[VAR_10] = 0;
  while (*VAR_3) {
   if (!VAR_11[(unsigned char)(*VAR_3)]) {
    VAR_12[(unsigned char)(*VAR_3)] = (unsigned char)(*VAR_4);
    VAR_11[(unsigned char)(*VAR_3)] = 1;
   }
   VAR_3++;
   if (*VAR_4)
    VAR_4++;
  }

  while (*VAR_2) {
   VAR_6 = (unsigned char)(*VAR_2++);
   VAR_7 = VAR_12[VAR_6];
   if ((*VAR_1 = (char)VAR_7))
    VAR_1++;
  }



  while (*VAR_5) {
   VAR_12[(unsigned char)(*VAR_5)] = (unsigned char)(*VAR_5);
   VAR_5++;
  }
 }
 *VAR_1 = '\0';
}
