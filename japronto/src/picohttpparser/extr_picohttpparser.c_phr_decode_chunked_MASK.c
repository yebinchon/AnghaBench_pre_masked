
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phr_chunked_decoder {int _state; int _hex_count; int bytes_left_in_chunk; int consume_trailer; } ;
typedef int ssize_t ;
 int FUNC_0 (int) ;
 int FUNC_1 (char) ;
 int FUNC_2 (char*,char*,size_t) ;

ssize_t FUNC_3(struct phr_chunked_decoder *VAR_0, char *VAR_1, size_t *VAR_2)
{
    size_t VAR_3 = 0, VAR_4 = 0, VAR_5 = *VAR_2;
    ssize_t VAR_6 = -2;

    while (1) {
        switch (VAR_0->_state) {
        case 130:
            for (;; ++VAR_4) {
                int VAR_7;
                if (VAR_4 == VAR_5)
                    goto Exit;
                if ((VAR_7 = FUNC_1(VAR_1[VAR_4])) == -1) {
                    if (VAR_0->_hex_count == 0) {
                        VAR_6 = -1;
                        goto Exit;
                    }
                    break;
                }
                if (VAR_0->_hex_count == sizeof(size_t) * 2) {
                    VAR_6 = -1;
                    goto Exit;
                }
                VAR_0->bytes_left_in_chunk = VAR_0->bytes_left_in_chunk * 16 + VAR_7;
                ++VAR_0->_hex_count;
            }
            VAR_0->_hex_count = 0;
            VAR_0->_state = 131;

        case 131:

            for (;; ++VAR_4) {
                if (VAR_4 == VAR_5)
                    goto Exit;
                if (VAR_1[VAR_4] == '\012')
                    break;
            }
            ++VAR_4;
            if (VAR_0->bytes_left_in_chunk == 0) {
                if (VAR_0->consume_trailer) {
                    VAR_0->_state = 129;
                    break;
                } else {
                    goto Complete;
                }
            }
            VAR_0->_state = 132;

        case 132: {
            size_t VAR_8 = VAR_5 - VAR_4;
            if (VAR_8 < VAR_0->bytes_left_in_chunk) {
                if (VAR_3 != VAR_4)
                    FUNC_2(VAR_1 + VAR_3, VAR_1 + VAR_4, VAR_8);
                VAR_4 += VAR_8;
                VAR_3 += VAR_8;
                VAR_0->bytes_left_in_chunk -= VAR_8;
                goto Exit;
            }
            if (VAR_3 != VAR_4)
                FUNC_2(VAR_1 + VAR_3, VAR_1 + VAR_4, VAR_0->bytes_left_in_chunk);
            VAR_4 += VAR_0->bytes_left_in_chunk;
            VAR_3 += VAR_0->bytes_left_in_chunk;
            VAR_0->bytes_left_in_chunk = 0;
            VAR_0->_state = 133;
        }

        case 133:
            for (;; ++VAR_4) {
                if (VAR_4 == VAR_5)
                    goto Exit;
                if (VAR_1[VAR_4] != '\015')
                    break;
            }
            if (VAR_1[VAR_4] != '\012') {
                VAR_6 = -1;
                goto Exit;
            }
            ++VAR_4;
            VAR_0->_state = 130;
            break;
        case 129:
            for (;; ++VAR_4) {
                if (VAR_4 == VAR_5)
                    goto Exit;
                if (VAR_1[VAR_4] != '\015')
                    break;
            }
            if (VAR_1[VAR_4++] == '\012')
                goto Complete;
            VAR_0->_state = 128;

        case 128:
            for (;; ++VAR_4) {
                if (VAR_4 == VAR_5)
                    goto Exit;
                if (VAR_1[VAR_4] == '\012')
                    break;
            }
            ++VAR_4;
            VAR_0->_state = 129;
            break;
        default:
            FUNC_0(!"decoder is corrupt");
        }
    }

Complete:
    VAR_6 = VAR_5 - VAR_4;
Exit:
    if (VAR_3 != VAR_4)
        FUNC_2(VAR_1 + VAR_3, VAR_1 + VAR_4, VAR_5 - VAR_4);
    *VAR_2 = VAR_3;
    return VAR_6;
}
